//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWPagingProvider.h"

@class NSString;

@interface GWGetBigLabelProvider : GWPagingProvider
{
    NSString *_relatedid;
    NSString *_tag;
}

@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *relatedid; // @synthesize relatedid=_relatedid;
- (void).cxx_destruct;
- (void)requestWithBigLabelModelListHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

