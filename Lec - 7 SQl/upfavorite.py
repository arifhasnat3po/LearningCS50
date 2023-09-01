import csv
import re

language = input("Language: ").strip().upper()
counter = 0

with open ("favorites.csv", "r") as file :
    reader = csv.DictReader(file)
    
    for row in reader:
        if row["language"].strip().upper() == language:
            counter += 1


print(counter)
            
