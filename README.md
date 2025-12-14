# Office
This is a command-line program about some tasks. such as file. It can get the size of a file and output the first N lines of the file (default 10 lines). If you like it, you can give me a star or fork. Thank you for your using!!!
## Get the size of a file
You can use ```size``` to get the size of a file.
```EBNF
"size" <file>
```
## Output the first N lines of the file
You can use ```head``` to output the first N lines of the file (default 10 lines).
```EBNF
"head" <file> [line]
```
## Example
test.txt:
```text
dwudgefegfygalgfeygfyegfuehduhedgehdu
dieyfe
foejfuhed
fef njei 4h
```
---
### size
input:
```bash
office size test.txt
```
output:
```
The file'size is 69 byte(s)
```
---
### head

input:
```bash
office head test.txt
```
output:
```
This's d:\Office\test.txt's lines 1 to 10:
1: dwudgefegfygalgfeygfyegfuehduhedgehdu
2: dieyfe
3: foejfuhed
4: fef njei 4h5: 6: 7: 8: 9: 10:
```
