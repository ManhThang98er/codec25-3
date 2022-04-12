import gzip
with gzip.open("demo.pdf.gz", mode="rt") as f:
    file_content = f.read()
    print(file_content)