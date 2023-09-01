import csv
languages = {}
with open ("favorites.csv", "r") as file :
    reader = csv.DictReader(file)
    
    for row in reader:
        language = row["language"].strip().upper()
        if not language in languages:
            languages[language] = 0
        
        languages[language] += 1
    
for language in sorted(languages):
    print(language, languages[language])