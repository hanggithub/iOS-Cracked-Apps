//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSArray;

@interface MCOfficialNetClearUnreadCount : AMPNetPacket
{
    NSArray *_messagaTypeIDs;
}

@property(retain, nonatomic) NSArray *messagaTypeIDs; // @synthesize messagaTypeIDs=_messagaTypeIDs;
- (void).cxx_destruct;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithMessageTypeIDs:(id)arg1;

@end
