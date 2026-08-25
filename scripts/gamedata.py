from gamedata import emit, tree
from pathlib import Path
import json

proj_root = Path(__file__).parents[1]
gamedata_file = proj_root / "data" / "gamedata-medium.csv" # in
header_include_dir = proj_root / "include" # out
# header_file_path = proj_root / "include" / "GameData.hpp"

gamedata = tree.Tree(name="GameData", path="GameData", children={})
tree.parse_csv(open(gamedata_file, "r"), gamedata)

gamedata_dict = json.loads(
    repr(gamedata).replace("'", '"')
)
print(json.dumps(gamedata_dict, indent=1))

emitter = emit.structure.StructureEmitter
# header_file_path.write_text(emitter.emit(gamedata))
emitter.emit(gamedata, include_dir=header_include_dir)

print("Project root:", proj_root)
print("Gamedata file:", gamedata_file)
print("Gamedata header:", header_include_dir)