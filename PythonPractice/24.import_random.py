# random_examples.py
import random

def demonstrate_random_functions():
    # Generate a random float between 0 and 1
    random_float = random.random()
    print("Random float between 0 and 1:", random_float)

    # Generate a random integer within a specified range (inclusive)
    random_int = random.randint(1, 100)
    print("Random integer between 1 and 100:", random_int)

    # Generate a random integer within a range with step size
    random_range = random.randrange(1, 100, 5)  # Step size of 5
    print("Random integer from range(1, 100, 5):", random_range)

    # Select a random element from a list
    sample_list = ["apple", "banana", "cherry", "date"]
    random_choice = random.choice(sample_list)
    print("Random choice from list:", random_choice)

    # Shuffle the elements of a list in place
    random.shuffle(sample_list)
    print("Shuffled list:", sample_list)

demonstrate_random_functions()