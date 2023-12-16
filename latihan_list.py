benda_kos = ['kipas', 'handuk', 'colokan', 'botol minum']

for number, benda in enumerate (benda_kos, start=1):
    print(f'benda kosan {number}: {benda}')

fruits = ["Strawberries", "Nectarines", "Apples", "Grapes", "Peaches", "Cherries", "Pears"]
vegetables = ["Spinach", "Kale", "Tomatoes", "Celery", "Potatoes"]
 
dirty_dozen = [fruits, vegetables]
 
print(dirty_dozen[0][1])