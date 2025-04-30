#!/bin/bash

#clean 
#rm -f add_chelou.sh

cat > add_chelou.sh <<'EOF'
#!/bin/bash

# Ensure environment variables are set
if [ -z "$FT_NBR1" ] || [ -z "$FT_NBR2" ]; then
  echo "Error: FT_NBR1 and/or FT_NBR2 are not set."
  exit 1
fi

# Convert FT_NBR1: custom base-5 (', \, ", ?, !') to digits
# Important: The single quotes wrap the whole string, and each special character is escaped
# We'll use octal escape for the backslash: \134 (octal for '\')
DEC_NBR1=$(echo "$FT_NBR1" | tr "'\\134\"?!" '01234')
DEC_NBR2=$(echo "$FT_NBR2" | tr 'mrdoc' '01234')

# Check that no invalid characters remain (only digits allowed now)
if [[ ! "$DEC_NBR1" =~ ^[0-4]+$ ]] || [[ ! "$DEC_NBR2" =~ ^[0-4]+$ ]]; then
  echo "Error: Invalid characters after conversion."
  echo "DEC_NBR1: $DEC_NBR1"
  echo "DEC_NBR2: $DEC_NBR2"
  exit 1
fi

# Perform the arithmetic in bc
SUM=$(echo "obase=13; ibase=5; $DEC_NBR1 + $DEC_NBR2" | bc)

# Map base-13 output to gtaio luSnemf
echo "$SUM" | tr '0123456789ABC' 'gtaio luSnemf'
EOF

chmod +x add_chelou.sh

export FT_NBR1="\\'?\"\\\"'\\"
export FT_NBR2="rcrdmddd"
echo $FT_NBR1 | cat -e
echo $FT_NBR2 | cat -e
./add_chelou.sh

export FT_NBR1="\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\""
export FT_NBR2="dcrcmcmooododmrrrmorcmcrmomo"
echo $FT_NBR1 | cat -e
echo $FT_NBR2 | cat -e
./add_chelou.sh
