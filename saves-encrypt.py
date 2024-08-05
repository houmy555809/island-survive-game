import time
t=str(int(time.time()))
t2=str(int(time.time())+1)
with open("verify.txt","r",encoding="utf-8") as file:
    code=file.readline()
    #print("[Verify] Got code ",code,", expected ",t)
    if code==t or code==t2:
        #print("[Verify] Verify success.")
        pass
    else:
        #print("[Verify] Verify failed. Regret to operate.")
        #input()
        exit(0)
    file.close()
with open("saves.txt","r",encoding="utf-8") as file:
    content=file.readline()
    file.close()
#print("[Crypto] Successfully read from saves.txt")
res=""
key=23333
for i in content:
    res+=chr(ord(i)^key)
    key+=1
#print("[Crypto] Encrypting/Decrypting success.")
#print(res)
with open("saves.txt","w",encoding="utf-8") as file:
    file.write(res)
    file.close()
