//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_PBMutableArray, NSData;

@interface GMSx_GMPCPolyPolygon : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int clientSideTessellateStartIndex; // @dynamic clientSideTessellateStartIndex;
@property(nonatomic) _Bool hasClientSideTessellateStartIndex; // @dynamic hasClientSideTessellateStartIndex;
@property(nonatomic) _Bool hasLoopBreakArray; // @dynamic hasLoopBreakArray;
@property(nonatomic) _Bool hasLoopData; // @dynamic hasLoopData;
@property(nonatomic) _Bool hasTextureCoordinatesArray; // @dynamic hasTextureCoordinatesArray;
@property(nonatomic) _Bool hasTriangleFanBreaksArray; // @dynamic hasTriangleFanBreaksArray;
@property(nonatomic) _Bool hasTriangleFanStartIndex; // @dynamic hasTriangleFanStartIndex;
@property(nonatomic) _Bool hasTriangleFanVertices; // @dynamic hasTriangleFanVertices;
@property(nonatomic) _Bool hasTriangleIndexArray; // @dynamic hasTriangleIndexArray;
@property(nonatomic) _Bool hasTriangleStripBreaksArray; // @dynamic hasTriangleStripBreaksArray;
@property(nonatomic) _Bool hasTriangleStripVertices; // @dynamic hasTriangleStripVertices;
@property(nonatomic) _Bool hasUnstrokedEdgeArray; // @dynamic hasUnstrokedEdgeArray;
@property(nonatomic) _Bool hasVertexCount; // @dynamic hasVertexCount;
@property(retain, nonatomic) GMSx_PBMutableArray *loopBreakArray; // @dynamic loopBreakArray;
@property(retain, nonatomic) NSData *loopData; // @dynamic loopData;
@property(retain, nonatomic) GMSx_PBMutableArray *textureCoordinatesArray; // @dynamic textureCoordinatesArray;
@property(retain, nonatomic) GMSx_PBMutableArray *triangleFanBreaksArray; // @dynamic triangleFanBreaksArray;
@property(nonatomic) int triangleFanStartIndex; // @dynamic triangleFanStartIndex;
@property(retain, nonatomic) NSData *triangleFanVertices; // @dynamic triangleFanVertices;
@property(retain, nonatomic) GMSx_PBMutableArray *triangleIndexArray; // @dynamic triangleIndexArray;
@property(retain, nonatomic) GMSx_PBMutableArray *triangleStripBreaksArray; // @dynamic triangleStripBreaksArray;
@property(retain, nonatomic) NSData *triangleStripVertices; // @dynamic triangleStripVertices;
@property(retain, nonatomic) GMSx_PBMutableArray *unstrokedEdgeArray; // @dynamic unstrokedEdgeArray;
@property(nonatomic) int vertexCount; // @dynamic vertexCount;

@end

