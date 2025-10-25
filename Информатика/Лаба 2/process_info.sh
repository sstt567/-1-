#!/bin/bash
ps aux
echo "Количество процессов: $(ps aux | wc -l)"
