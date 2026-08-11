from gamedata import *
from pathlib import Path
import json

proj_root = Path(__file__).parents[1]
gamedata_file = proj_root / "data" / "gamedata-basic.csv" # in
gamedata_header_file = proj_root / "include" / "GameData.hpp" # out

gamedata = make_tree(open(gamedata_file, "r"))
dict_gamedata = json.loads(
    repr(gamedata).replace("'", '"')
)
print(json.dumps(dict_gamedata, indent=1))

open(gamedata_header_file, "w").write(gamedata.emit())

print("Project root:", proj_root)
print("Gamedata file:", gamedata_file)
print("Gamedata header:", gamedata_header_file)