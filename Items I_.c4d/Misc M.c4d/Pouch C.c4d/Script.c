#strict 2

#include LF_I // ist ein Item

// Eigenschaften des Gegenstandes

public func ItemVolume(){ return 1; } // falls man einen Rucksack in den Rucksack stecken will oO

// Anordnung am Clonk

public func PackVolume(){ return 10; }	// Ist ein Rucksack? Gibt Volumen an
public func IsBeltItem(){ return true; }// Kann an einen G�rtel-Slot geh�ngt werden
public func IsPouch(){ return true; }	// Macht Platz f�r G�rtel-Items
public func IsContainer(){ return true; } // Kann als Container durchsucht und gepl�ndert werden
