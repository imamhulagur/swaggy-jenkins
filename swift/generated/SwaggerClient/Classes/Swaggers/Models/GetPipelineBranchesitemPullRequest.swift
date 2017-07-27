//
// GetPipelineBranchesitemPullRequest.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class GetPipelineBranchesitemPullRequest: JSONEncodable {
    public var links: GetPipelineBranchesitemPullRequestLinks?
    public var author: String?
    public var id: String?
    public var title: String?
    public var url: String?
    public var _class: String?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["_links"] = self.links?.encodeToJSON()
        nillableDictionary["author"] = self.author
        nillableDictionary["id"] = self.id
        nillableDictionary["title"] = self.title
        nillableDictionary["url"] = self.url
        nillableDictionary["_class"] = self._class
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
