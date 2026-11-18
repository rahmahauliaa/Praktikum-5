code = input().strip()
message = input().strip()

if len(code) != len(message):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    result = ""
    star = 0
    hashtag = 0

    for i in range(len(code)):
        if code[i] == message[i]:
            if code[i] == " ":
                result += " "
            else:
                result += "*"
                star += 1
        else:
            result += "#"
            hashtag += 1

    print(result)
    print("* =", star)
    print("# =", hashtag)

    if star >= hashtag:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")