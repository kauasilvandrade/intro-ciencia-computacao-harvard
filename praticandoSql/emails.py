import csv

from cs50 import SQL

open("emails.db", "w").close()
db = SQL("sqlite:///emails.db")

db.execute("CREATE TABLE emails (id INTEGER, nome TEXT, email TEXT, PRIMARY KEY(id))")

with open("pessoas.csv", "r") as file:
    reader = csv.DictReader(file)
    
    for row in reader:
        nome = row["nome"].strip().upper()
        email = row["email"].strip().upper()
        db.execute("INSERT INTO emails (nome, email) VALUES (?, ?)", nome, email)
        
    