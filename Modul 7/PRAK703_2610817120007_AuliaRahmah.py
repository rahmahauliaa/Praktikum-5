sentence = input("Kalimat : ")

vokal = 0
konsonan = 0

for c in sentence.lower():
    if c in "aiueo":
        vokal += 1
    elif c.isalpha():
        konsonan += 1

print("Jumlah Vokal :", vokal)
print("Jumlah Konsonan :", konsonan)