import csv
languages = [] # list of languages
with open ("favorites.csv", "r") as file :
    reader = csv.DictReader(file)
    
    for row in reader:
        language = row["language"].strip().uppercase()
        if not row["language"] in languages:
            languages.append(language)
    
for language in languages:
    print(language)