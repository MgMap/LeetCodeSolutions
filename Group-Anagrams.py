class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hihi = {}
        for i in range(len(strs)):
            count = [0] * 26
            for j in range(len(strs[i])):
                count[ord(strs[i][j]) - ord('a')] += 1
            key = tuple(count)
            if key not in hihi:
                hihi[key] = []
            hihi[key].append(strs[i])
        return list(hihi.values())