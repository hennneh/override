bytes = b'\x80\x90\x90\x90'
integer = int.from_bytes(bytes,byteorder='little')
print(integer)
