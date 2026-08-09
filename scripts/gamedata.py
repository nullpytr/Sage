from gamedata import emit, tree
from pathlib import Path
import json

proj_root = Path(__file__).parents[1]
gamedata_file = proj_root / "data" / "gamedata-basic.csv" # in
gamedata_header_file = proj_root / "include" / "GameData.hpp" # out

gamedata = tree.make_tree(open(gamedata_file, "r"))
gamedata_dict = json.loads(
    repr(gamedata).replace("'", '"')
)
print(json.dumps(gamedata_dict, indent=1))

gamedata_header = emit.structure.StructureDefEmitter(gamedata)

open(gamedata_header_file, "w").write(gamedata_header.emit())

print("Project root:", proj_root)
print("Gamedata file:", gamedata_file)
print("Gamedata header:", gamedata_header_file)