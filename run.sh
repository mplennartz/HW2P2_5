#!/bin/bash
printf "SHELL : Starting process p_sem_wait\n"
./p_sem_wait &
sleep 5s
printf "\nSHELL : Currently running processes\n"
ps
sleep 1s
printf "\nSHELL : Starting process p_sem_post\n"
./p_sem_post
