word = input().strip()
small = word.lower()

if small == small[::-1]:
    print(f"Kata '{word}' adalah palindrom")
else:
    print(f"Kata '{word}' bukan palindrom")