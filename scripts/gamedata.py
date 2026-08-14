from gamedata import emit, tree
from pathlib import Path
import json

proj_root = Path(__file__).parents[1]
gamedata_file = proj_root / "data" / "gamedata-basic.csv" # in
gamedata_header_file = proj_root / "include" / "GameData.hpp" # out

gamedata = tree.Tree(name="GameData", path="GameData", children={})
tree.parse_csv(open(gamedata_file, "r"), gamedata)

gamedata_dict = json.loads(
    repr(gamedata).replace("'", '"')
)
print(json.dumps(gamedata_dict, indent=1))

emitter = emit.structure.StructureEmitter(gamedata)

gamedata_header: list[str] = []
write = gamedata_header.append

write("#pragma once")
write("#include \"Core/Types.hpp\"")
write("#include \"Core/Enum.hpp\"")
write("#include \"Core/Sav.hpp\"")

write(emitter.emit())

open(gamedata_header_file, "w").write("\n".join(gamedata_header))

print("Project root:", proj_root)
print("Gamedata file:", gamedata_file)
print("Gamedata header:", gamedata_header_file)