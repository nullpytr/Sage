from gamedata import emit, tree
from pathlib import Path
from shutil import rmtree
import json

proj_root = Path(__file__).parents[1]
gamedata_file = proj_root / "data" / "gamedata-medium.csv" # in
root_header_name = "GameData"
header_include_dir = proj_root / "include" # out
# header_file_path = proj_root / "include" / f"{root_header_name}.hpp"

gamedata = tree.Tree(name=root_header_name, path=root_header_name, children={})
tree.parse_csv(open(gamedata_file, "r"), gamedata)

gamedata_dict = json.loads(
    repr(gamedata).replace("'", '"')
)
print(json.dumps(gamedata_dict, indent=1))

header_dir = header_include_dir / root_header_name
if header_dir.exists(): rmtree(header_dir)
    
emitter = emit.structure.StructureEmitter
# header_file_path.write_text(emitter.emit(gamedata))
emitter.emit(gamedata, include_dir=header_include_dir)

print("Project root:", proj_root)
print("Gamedata file:", gamedata_file)
print("Gamedata header:", header_include_dir)