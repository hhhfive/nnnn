import random
def generate_ question():
 	operators = ['+', '一','*','/']
	num1 = random. randint(1, 100)
	num2 = random. randint(1, 100)
	operator1 = random. choice( operators)
	operator2 = random. choice( operators)
	result=0
	question=''
	if operator2 =='/' and num2 == 0:
		num2 = 1
	if operator1 == '+':
		result = num1 + num2
	elif operator1 ==
		result = num1 - num2
	elif operator1 == '*':
		result = num1 * num2
	elif operator1 == '/':
		result = num1 // num2
	question = str(num1) + operator1 + str(num2) + operator2 + str(random. randint(1, 100))
	if operator2 == '+':
		result += int(question.split('+')[1])
	elif operator2 =='-':
		result = int(question.split('-')[1])
	elif operator2 ==
		result *= int(question. split('*')[1])
	elif operator2 == '/':
		resu1t //= int(question.split('/')[1])
		return question +'=' + str(result)
	num_ questions = int(input("请输入题目 数量: "))
	for i in range(num_ questions):
		print( generate question())
