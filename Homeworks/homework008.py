Car = {'brand': 'empty', 'gen': 'empty', 'color': 'empty', 'price': '0'}

Car['brand'] = input("Please input car brand: ")
Car['gen'] = input("Please input car generation: ")
Car['color'] = input("Please input car color: ")
Car['price'] = input("Please input car price: ")

print("---------------------------------------------")

print("Car brand: %s" %Car['brand'])
print("Car generation: %s" %Car['gen'])
print("Car color: %s" %Car['color'])
print("Car price: %s" %Car['price'])
