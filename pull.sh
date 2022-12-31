#!/bin/bash
# Github bash script
echo "Github Pull Start";
git fetch origin;
git merge origin/main --allow-unrelated-histories;
git pull;
echo "Github Pull End";