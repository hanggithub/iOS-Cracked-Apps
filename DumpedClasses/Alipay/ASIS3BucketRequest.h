//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASIS3Request.h"

@class ASIS3BucketObject, NSMutableArray, NSString;

@interface ASIS3BucketRequest : ASIS3Request
{
    NSString *bucket;
    NSString *subResource;
    NSString *prefix;
    NSString *marker;
    int maxResultCount;
    NSString *delimiter;
    ASIS3BucketObject *currentObject;
    NSMutableArray *objects;
    NSMutableArray *commonPrefixes;
    _Bool isTruncated;
}

+ (id)DELETERequestWithBucket:(id)arg1;
+ (id)PUTRequestWithBucket:(id)arg1;
+ (id)requestWithBucket:(id)arg1 subResource:(id)arg2;
+ (id)requestWithBucket:(id)arg1;
@property _Bool isTruncated; // @synthesize isTruncated;
@property(retain, nonatomic) NSString *delimiter; // @synthesize delimiter;
@property(nonatomic) int maxResultCount; // @synthesize maxResultCount;
@property(retain, nonatomic) NSString *marker; // @synthesize marker;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix;
@property(retain) NSMutableArray *commonPrefixes; // @synthesize commonPrefixes;
@property(retain) NSMutableArray *objects; // @synthesize objects;
@property(retain, nonatomic) ASIS3BucketObject *currentObject; // @synthesize currentObject;
@property(retain, nonatomic) NSString *subResource; // @synthesize subResource;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)buildURL;
- (id)canonicalizedResource;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end
