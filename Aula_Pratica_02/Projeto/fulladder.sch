VERSION 6
BEGIN SCHEMATIC
    BEGIN ATTR DeviceFamilyName "spartan3"
        DELETE all:0
        EDITNAME all:0
        EDITTRAIT all:0
    END ATTR
    BEGIN NETLIST
        SIGNAL Co
        SIGNAL S
        SIGNAL A
        SIGNAL B
        SIGNAL Ci
        PORT Output Co
        PORT Output S
        PORT Input A
        PORT Input B
        PORT Input Ci
        BEGIN BLOCKDEF carryout
            TIMESTAMP 2015 10 29 16 23 48
            RECTANGLE N 64 -192 320 0 
            LINE N 64 -160 0 -160 
            LINE N 64 -96 0 -96 
            LINE N 64 -32 0 -32 
            LINE N 320 -160 384 -160 
        END BLOCKDEF
        BEGIN BLOCKDEF sum
            TIMESTAMP 2015 10 29 16 23 49
            RECTANGLE N 64 -192 320 0 
            LINE N 64 -160 0 -160 
            LINE N 64 -96 0 -96 
            LINE N 64 -32 0 -32 
            LINE N 320 -160 384 -160 
        END BLOCKDEF
        BEGIN BLOCK XLXI_1 carryout
            PIN A A
            PIN B B
            PIN Ci Ci
            PIN Co Co
        END BLOCK
        BEGIN BLOCK XLXI_3 sum
            PIN A A
            PIN B B
            PIN Ci Ci
            PIN S S
        END BLOCK
    END NETLIST
    BEGIN SHEET 1 1900 1344
        ATTR LengthUnitName "CM"
        ATTR GridsPerUnit "4"
        BEGIN BRANCH Co
            WIRE 1248 400 1520 400
            WIRE 1520 400 1648 400
        END BRANCH
        IOMARKER 1648 400 Co R0 28
        BEGIN BRANCH S
            WIRE 1248 880 1520 880
            WIRE 1520 880 1648 880
        END BRANCH
        IOMARKER 1648 880 S R0 28
        IOMARKER 224 480 A R180 28
        IOMARKER 224 624 B R180 28
        IOMARKER 224 768 Ci R180 28
        BEGIN BRANCH Ci
            WIRE 224 768 240 768
            WIRE 240 768 416 768
            WIRE 416 768 496 768
            WIRE 496 768 656 768
            WIRE 496 768 496 1008
            WIRE 496 1008 864 1008
            WIRE 656 528 656 768
            WIRE 656 528 864 528
        END BRANCH
        BEGIN BRANCH B
            WIRE 224 624 384 624
            WIRE 384 624 416 624
            WIRE 416 624 640 624
            WIRE 384 624 384 944
            WIRE 384 944 864 944
            WIRE 640 464 640 624
            WIRE 640 464 864 464
        END BRANCH
        BEGIN INSTANCE XLXI_3 864 1040 R0
        END INSTANCE
        BEGIN INSTANCE XLXI_1 864 560 R0
        END INSTANCE
        BEGIN BRANCH A
            WIRE 224 480 320 480
            WIRE 320 480 416 480
            WIRE 320 480 320 880
            WIRE 320 880 864 880
            WIRE 416 400 864 400
            WIRE 416 400 416 480
        END BRANCH
    END SHEET
END SCHEMATIC
