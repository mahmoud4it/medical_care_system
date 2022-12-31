#!/bin/bash
# Github bash script
echo "Github Push Start";
today=$(date +"%d-%m-%Y");
git status;
git add .;
git commit -m "Medical Care System (C++) Updates on $today";
#git push -u origin master;
git push -u origin main;
echo "Github Push End on $today";