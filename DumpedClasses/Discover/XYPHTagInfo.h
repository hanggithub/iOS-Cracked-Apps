//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSString;

@interface XYPHTagInfo : XYRKModel
{
    _Bool _inlikes;
    _Bool _canfollow;
    NSString *_name;
    NSString *_tagId;
    NSString *_link;
    NSString *_image;
    NSString *_bannerImage;
    NSString *_desc;
    NSString *_shareLink;
    NSString *_totalNotes;
    NSString *_totalFans;
    NSString *_totalLikes;
}

+ (id)totalLikesJSONTransformer;
+ (id)totalFansJSONTransformer;
+ (id)totalNotesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool canfollow; // @synthesize canfollow=_canfollow;
@property(retain, nonatomic) NSString *totalLikes; // @synthesize totalLikes=_totalLikes;
@property(retain, nonatomic) NSString *totalFans; // @synthesize totalFans=_totalFans;
@property(retain, nonatomic) NSString *totalNotes; // @synthesize totalNotes=_totalNotes;
@property(nonatomic) _Bool inlikes; // @synthesize inlikes=_inlikes;
@property(retain, nonatomic) NSString *shareLink; // @synthesize shareLink=_shareLink;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)init;

@end

