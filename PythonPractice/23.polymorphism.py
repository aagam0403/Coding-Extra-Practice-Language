#polymorphism = operator overloading
#for ex. + have many forms like
print(3+1)                   #addition
print("Aagam" + "Sanghvi")   #concatenate
print([1,2,3]+[4,5,6])       #merge

# Example of Polymorphism with a common method
class Bird:
    def sound(self):
        return "Chirp Chirp"
class Dog:
    def sound(self):
        return "Bark Bark"
class Cat:
    def sound(self):
        return "Meow Meow"
def make_sound(animal):
    print(animal.sound())
    
bird = Bird()
dog = Dog()
cat = Cat()
make_sound(bird)  # Output: Chirp Chirp
make_sound(dog)   # Output: Bark Bark
make_sound(cat)   # Output: Meow Meow