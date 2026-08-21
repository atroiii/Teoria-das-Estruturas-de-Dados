# 📓Exercício 1

# 🛢️ Tanques Cilíndricos: Tintas e Custo

Algoritmo que calcula a **quantidade de latas de tinta** necessárias e o **custo total** para pintar tanques cilíndricos de combustível, com base na altura e no raio informados.

## 📋 Descrição do Problema

Dado o raio (R) e a altura (H) de um tanque cilíndrico, o algoritmo deve calcular:

- A área total a ser pintada (incluindo as duas bases e a lateral)
- A quantidade de litros de tinta necessários
- A quantidade de latas de tinta a comprar
- O custo total da pintura

## ⚙️ Condições do Problema

| Item | Valor |
|---|---|
| Custo de cada lata | R$ 50,00 |
| Volume de cada lata | 5 litros |
| Rendimento por litro | 3 m² |
| Valor de π utilizado | 3,14 |

## 📥 Dados de Entrada

- **R** — Raio do cilindro
- **H** — Altura do cilindro

## 📤 Dados de Saída

- **C** — Custo total
- **QTDE** — Quantidade de latas

## 🧮 Plano de Cálculo (Planejamento Reverso)

| Ordem | Cálculo | Fórmula |
|:---:|---|---|
| 1 | Área da Base (AB) | `AB = π × R²` |
| 2 | Área Lateral (AL) | `AL = 2 × π × R × H` |
| 3 | Área Total (AT) | `AT = 2×AB + AL` |
| 4 | Litros Totais (LT) | `LT = AT ÷ 3` |
| 5 | Quantidade de Latas (QTDE) | `QTDE = arredondar_para_cima(LT ÷ 5)` |
| 6 | Custo (C) | `C = QTDE × 50` |

