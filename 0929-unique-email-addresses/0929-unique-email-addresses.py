class Solution(object):
    def numUniqueEmails(self, emails):
        ans = 0
        s = set()

        for e in emails:
            local, domain = e.split("@")

            if "+" in local:
                local = local.split("+")[0]

            local = local.replace(".", "")

            new_e = local + "@" + domain

            if new_e not in s:
                s.add(new_e)
                ans += 1

        return ans