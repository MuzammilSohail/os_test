var=1;

while [[ $var > 0 ]]; 
do
 echo "$(dmesg | tail -50 | toilet -f term -F border --gay)";
 ((var--));
 done
