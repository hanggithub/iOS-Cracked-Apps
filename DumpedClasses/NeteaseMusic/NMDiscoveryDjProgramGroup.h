//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMDjProgram;

@interface NMDiscoveryDjProgramGroup : NSObject
{
    NMDjProgram *_djProgram;
    unsigned long long _type;
}

+ (_Bool)valid:(id)arg1;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NMDjProgram *djProgram; // @synthesize djProgram=_djProgram;
- (void).cxx_destruct;

@end

