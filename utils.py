import os

# Root folder to start
root_folder = "include"

# Function name replacements
replacements = {
    "RegisterSetValue": "write",
    "RegisterGetValue": "read"
}

# Walk through all subdirectories and files
for subdir, _, files in os.walk(root_folder):
    for file in files:
        if file.endswith(".hpp"):
            file_path = os.path.join(subdir, file)
            # Read file content
            with open(file_path, "r", encoding="utf-8") as f:
                content = f.read()
            
            # Replace function names
            for old_name, new_name in replacements.items():
                content = content.replace(old_name, new_name)
            
            # Write the modified content back
            with open(file_path, "w", encoding="utf-8") as f:
                f.write(content)
            
            print(f"Updated {file_path}")
