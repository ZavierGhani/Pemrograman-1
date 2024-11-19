def konversi_detik_ke_waktu(detik):
    hari = detik // 86400
    sisa_detik = detik % 86400
    jam = sisa_detik // 3600
    sisa_detik %= 3600
    menit = sisa_detik // 60
    detik_sisa = sisa_detik % 60
    
    if hari > 0:
        return f"{hari} hari {jam:02}:{menit:02}:{detik_sisa:02}"
    else:
        return f"{jam:02}:{menit:02}:{detik_sisa:02}"

detik = int(input("Masukkan jumlah detik: "))
print(konversi_detik_ke_waktu(detik))
