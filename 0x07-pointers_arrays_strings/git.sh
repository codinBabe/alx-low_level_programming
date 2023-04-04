#!/bin/bash
read -p "Commit message here:" VAR1
git add .
git commit -m "$VAR1"
git push -u origin master
