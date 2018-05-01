var=1;

while [[ $var > 0 ]]; 
do
 echo "$( echo 'System call returned 0 ----------Successful return----------' | toilet -f term -F border --gay)";
 ((var--));
 done
