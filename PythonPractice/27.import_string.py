import string

print("string.ascii_letters      :", string.ascii_letters)
print("string.ascii_lowercase    :", string.ascii_lowercase)
print("string.ascii_uppercase    :", string.ascii_uppercase)
print("string.digits             :", string.digits)
print("string.hexdigits          :", string.hexdigits)
print("string.octdigits          :", string.octdigits)
print("string.punctuation        :", string.punctuation)
print("string.printable          :", string.printable)

sample_text = "hello world from python"
print("Using string.capwords():")
print("Original : ",sample_text)
print("Uppercase    : ",sample_text.upper())
print("Lowercase    : ", sample_text.lower())
