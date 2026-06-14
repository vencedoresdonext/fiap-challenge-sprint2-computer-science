# F = U · B̅ · D · V · (E + S + C) · (NOT(H) + P) logica enviada na sprint passada

usuario_autenticado = True
bateria_cheia = False
dispositivo_ligado = True
veiculo_conectado = True

energia_solar = True
sistema_fotovoltaico = False
capacidade_rede = True

horario_pico = True
usuario_prioritario = True

resultado = (
  usuario_autenticado
  and not bateria_cheia
  and dispositivo_ligado
  and veiculo_conectado
  and (energia_solar or sistema_fotovoltaico or capacidade_rede)
  and ((not horario_pico) or usuario_prioritario)
)

print("===== SISTEMA DE RECARGA =====")
if resultado:
    print("Carregamento AUTORIZADO")
else:
    print("Carregamento BLOQUEADO")
