import zipfile

# Open a zip file at the given filepath. If it doesn't exist, create one.
# If the directory does not exist, it fails with FileNotFoundError
filepath = 'test1.zip'
with zipfile.ZipFile(filepath, 'a') as zipf:
    # Add a file located at the source_path to the destination within the zip
    # file. It will overwrite existing files if the names collide, but it
    # will give a warning
    a = 'new_file.txt'
    b = '1.pdf'
    zipf.write(a)
    zipf.write(b)

#doc file zip
from zipfile import ZipFile
file_name = "python.zip"

with ZipFile(file_name, 'r') as zip:
	# printing all the contents of the zip file
	#zip.printdir()
	a=zip.namelist()
	print(a)

	# extracting all the files
	print('Extracting all the files now...')
	#zip.extractall()
	print('Done!')   