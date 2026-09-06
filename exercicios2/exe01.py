codigoVenda = 0
valorVenda = 0
totalVenda = 0
valorTotal = 0


while True:
    codigoVenda = int(input("Digite o código da  venda: "))
    if codigoVenda == -1:
        print("Encerrando...")
        break

    valorVenda = float(input("Digite o valor da  venda: "))

    if valorVenda <= 0:
        print("Valor invaldio!")
        continue

    totalVenda += 1
    valorTotal += valorVenda



print(f"""
Total Vendas: {totalVenda}
Valor Arrecadado: {valorTotal}
""")


