halaman = [10,12,9,8,6,14,57,99,68,72]
Maks = 0
Min = 1000

# for i in range (1,1001):
#     if i % 2 != 0:
#         halaman.append(i)
#
# print(halaman)

# for i in range (1,1001):
#     if i % 6 == 0:
#         halaman.append(i)
#
# print(halaman)

for i in halaman:
    if i >= Maks:
        Maks = i

for i in halaman:
    if i <= Min:
        Min = i

print(Maks)
print(Min)