# Personal Message
user_name = input("Input your name: ")
print(f"Hello {user_name}! Would you like to learn some Python today?")

# Name Cases
print(user_name.lower())
print(user_name.upper())
print(user_name.title())

# Famous Quote
print('Albert Einstein once said, "A person who never made a mistake never tried anything new."')

# Famous Quote Redux
famous_name = "Albert Einstein"
print(f'{famous_name} once said, "A person who never made a mistake never tried anything new."')

# Stripping Names
random_name = '  daniel '
print(random_name)
print(random_name.rstrip())
print(random_name.lstrip())
print(random_name.strip())
