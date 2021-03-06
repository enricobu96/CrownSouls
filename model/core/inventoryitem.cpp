#include "inventoryitem.h"

InventoryItem::InventoryItem(std::string _name, U_INT _itemLevel, std::string _description) {
    setName(_name);
    setItemLevel(_itemLevel);
    setDescription(_description);
}

//SETTER
void InventoryItem::setName(const std::string & _name) {
    if(_name.size() > 100)
        name="unknown";
    else
        name=_name;
}

void InventoryItem::setItemLevel(const U_INT & _itemLevel) {
    if(_itemLevel > 99)
        itemLevel = 0;
    else
        itemLevel=_itemLevel;
}

void InventoryItem::setDescription(const std::string & _description) {
    if(_description.size() > 5000)
        description = "";
    else
        description=_description;
}


//GETTER
std::string InventoryItem::getName() const {
    return name;
}

U_INT InventoryItem::getItemLevel() const {
    return itemLevel;
}

std::string InventoryItem::getDescription() const {
    return description;
}
