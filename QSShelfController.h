/* QSShelfController */

#define kQSShelfAndClipboardID @"QSPresetShelves"
#define kQSShelfContentsID @"QSPresetShelfContents"

@class QSObject;
@interface QSShelfController : NSWindowController{
    IBOutlet NSTabView *tabView;
    IBOutlet NSTableView *shelfTableView;
    NSArray *objectArray;
    
}

+ (id)sharedInstance;

- (BOOL)addObject:(QSObject *)object atIndex:(NSUInteger)index;
@end
