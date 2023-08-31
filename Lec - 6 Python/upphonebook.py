import csv

# Open the CSV file in append mode
with open("Phonebook.csv", "a", newline="") as file:
    name = input("Name: ")
    number = input("Number: ")

    # Create a CSV writer object
    writer = csv.writer(file)

    # Write a new row to the CSV file
    writer.writerow([name, number])

# The "with" block automatically closes the file when done
