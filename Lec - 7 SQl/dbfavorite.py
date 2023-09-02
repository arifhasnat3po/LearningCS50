# Searches database popularity of a problem

import csv

from cs50 import SQL

# Open database
db = SQL("sqlite:///favorites.db")

# Prompt user for favorite
favorite = input("Favorite: ")

# Search for title
#rows = db.execute("SELECT COUNT(*) FROM favorites WHERE problem LIKE ?", "%" + favorite + "%")
rows = db.execute("SELECT problem FROM favorites WHERE problem LIKE ?", favorite)
# Get first (and only) row

for row in rows:
    print(row["problem"])
